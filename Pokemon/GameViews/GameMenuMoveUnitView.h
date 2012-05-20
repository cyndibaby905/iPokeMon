//
//  GameMenuMoveUnitView.h
//  Pokemon
//
//  Created by Kaijie Yu on 2/27/12.
//  Copyright (c) 2012 Kjuly. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol GameMenuMoveUnitViewDelegate <NSObject>
- (void)showDetail:(id)sender;
@end

@interface GameMenuMoveUnitView : UIView

// localization job is done in this method
- (void)configureMoveUnitWithName:(NSString *)name
                               pp:(NSString *)pp
                         delegate:(id <GameMenuMoveUnitViewDelegate>)delegate
                              tag:(NSInteger)tag;
- (void)setButtonEnabled:(BOOL)enabled;

@end
