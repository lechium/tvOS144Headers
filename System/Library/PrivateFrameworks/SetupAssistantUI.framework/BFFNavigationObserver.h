/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BFFNavigationControllerDelegate;
@interface BFFNavigationObserver : NSObject {

	id<BFFNavigationControllerDelegate> _observer;

}

@property (assign,nonatomic,__weak) id<BFFNavigationControllerDelegate> observer;              //@synthesize observer=_observer - In the implementation block
+(id)observerWithObserver:(id)arg1 ;
-(void)setObserver:(id<BFFNavigationControllerDelegate>)arg1 ;
-(id<BFFNavigationControllerDelegate>)observer;
@end
