var log = console.log.bind(console)

var loadLevel = function(game, n){
    n = n - 1
    var level = levels[n]
    log(level)
    var blocks = []
    for(var i = 0; i < level.length; i++){
        var p = level[i]
        var b = Block(game,p)        
        //设置 block 坐标
        blocks.push(b)
    }
    return blocks
}

var blocks = []
var enableDebugMode = function(game, enable){
    if(!enable){
        return 
    }
    window.paused = false
    window.addEventListener('keydown', function(event){
        //log('event.key')
        var k = event.key
        if(k == 'p'){
            //暂停功能
            window.paused = (!window.paused)
        }else if ('1234567'.includes(k)){
            //载入关卡
            // blocks = loadLevel(game, Number(k))
        }
    })
    //控制速度
    document.querySelector('#id-input-speed').addEventListener('input', function(){
        var input = event.target
        //log(event,input.value)
        window.fps = Number(input.value)
    })
}

var __main = function(){

    
    var images = {
        bullet: "img/bullet.png",
        cloud: "img/cloud.png",
        sky: "img/sky.jpg",
        player: "img/player.png",
        enemy0: "img/enemy.png",
        enemy1: "img/enemy.png",
        enemy2: "img/enemy.png",
        enemy3: "img/enemy.png",
        enemy4: "img/enemy.png",
        fire: "img/fire.png",
    }
    var game = HaiGame.instance(60, images, function (g) {
        //var s = Scene.new(game)
        var s = SceneTitle.new(game)
        g.runWithScene(s)
    }) 
    enableDebugMode(game, true)  
}

__main()
