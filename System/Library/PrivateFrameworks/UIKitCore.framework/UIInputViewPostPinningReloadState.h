/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIResponder;

@interface UIInputViewPostPinningReloadState : NSObject {

	UIResponder* _responderPreventedFromSettingInputViews;

}

@property (nonatomic,retain) UIResponder * responderToReload;              //@synthesize responderPreventedFromSettingInputViews=_responderPreventedFromSettingInputViews - In the implementation block
+(id)stateWithResponder:(id)arg1 ;
-(void)dealloc;
-(void)setResponderToReload:(UIResponder *)arg1 ;
-(UIResponder *)responderToReload;
@end

