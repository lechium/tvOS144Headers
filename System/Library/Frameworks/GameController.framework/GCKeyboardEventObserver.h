/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GCKeyboardEventObserverDelegate;
@interface GCKeyboardEventObserver : NSObject {

	id<GCKeyboardEventObserverDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<GCKeyboardEventObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<GCKeyboardEventObserverDelegate>)delegate;
-(void)setDelegate:(id<GCKeyboardEventObserverDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end

