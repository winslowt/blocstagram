//
//  MediaTableViewCell.h
//  
//
//  Created by Tony  Winslow on 11/21/15.
//
//

#import <UIKit/UIKit.h>

@class Media;

@interface MediaTableViewCell : UITableViewCell

@property (nonatomic, strong) Media *mediaItem;
@property (nonatomic, readonly) NSTextAlignment *setTextAlignment;


+ (CGFloat) heightForMediaItem:(Media *)mediaItem width:(CGFloat)width;



@end
