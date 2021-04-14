/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@protocol UIWebFormControl;
@interface UIWebDateTimePopoverViewController : UIViewController {

	id<UIWebFormControl> _innerWebDateTimeControl;

}

@property (nonatomic,retain) id<UIWebFormControl> _innerWebDateTimeControl;              //@synthesize innerWebDateTimeControl=_innerWebDateTimeControl - In the implementation block
-(void)dealloc;
-(void)loadView;
-(id)initWithDOMHTMLInputElement:(id)arg1 datePickerMode:(long long)arg2 ;
-(void)set_innerWebDateTimeControl:(id<UIWebFormControl>)arg1 ;
-(id<UIWebFormControl>)_innerWebDateTimeControl;
@end

