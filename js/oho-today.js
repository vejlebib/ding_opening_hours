/*
 * Javascript for the block Opening hours libraries today
 */
(function ($) { 
  Drupal.behaviors.dingOpeningHours = {
    attach: function(context, settings) {
      
      $('.tipsy-oho', context).once(context, function() {

        // attach tipsy tooltip
        $(this).tipsy({
          fallback: "Where's my tooltip yo'?",
          title: function() { 
            return $(this).find('.content-oho').html();
          },
          html: true,
          trigger: 'manual',
        });

        // Attach "toggle-style" click event
        $(this).click(function(event){
          event.preventDefault();
          if (this.opened) {
            $(this).tipsy("hide");
            this.opened=false;
          } 
          else {
            $(this).tipsy("show");
            this.opened=true;
          }
        });
        
      });
      
    }
  }
})(jQuery);
