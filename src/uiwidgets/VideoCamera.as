package uiwidgets {

  //import uiwidgets.*;

  import flash.display.*;
  import flash.media.*;
  import flash.events.*;

  public class VideoCamera extends Sprite {
    private var video:Video;

    public function VideoCamera () {
      super();
      video = new Video(320, 240);
  		video.smoothing = true;
  		video.attachCamera(Camera.getCamera());
    }

    public function getVideo (s:Sprite):void {
      trace("video1");
      if (s.getChildByName(video.name) == null) {
        s.addChild(video);
        trace("video2");
      }
    }
  }
}
