/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class NSString;

@interface _PXFeedbackFileRadarStepViewController : UIViewController {

	NSString* _messageTitle;
	NSString* _message;
	NSString* _buttonTitle;
	/*^block*/id _buttonActionHandler;

}

@property (nonatomic,copy) NSString * messageTitle;              //@synthesize messageTitle=_messageTitle - In the implementation block
@property (nonatomic,copy) NSString * message;                   //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * buttonTitle;               //@synthesize buttonTitle=_buttonTitle - In the implementation block
@property (nonatomic,copy) id buttonActionHandler;               //@synthesize buttonActionHandler=_buttonActionHandler - In the implementation block
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)viewDidLoad;
-(NSString *)buttonTitle;
-(void)setButtonTitle:(NSString *)arg1 ;
-(void)setMessageTitle:(NSString *)arg1 ;
-(NSString *)messageTitle;
-(id)buttonActionHandler;
-(void)setButtonActionHandler:(id)arg1 ;
@end
