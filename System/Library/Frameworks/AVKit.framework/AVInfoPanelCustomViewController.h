/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVKit/AVInfoPanelContentViewController.h>

@class UIViewController;

@interface AVInfoPanelCustomViewController : AVInfoPanelContentViewController {

	UIViewController* _externalViewController;

}

@property (nonatomic,readonly) UIViewController * externalViewController;              //@synthesize externalViewController=_externalViewController - In the implementation block
-(id)title;
-(BOOL)hasContent;
-(void)loadView;
-(id)preferredFocusEnvironments;
-(id)initWithExternalViewController:(id)arg1 ;
-(double)_preferredContentHeight;
-(UIViewController *)externalViewController;
@end

