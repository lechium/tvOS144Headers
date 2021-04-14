/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UIIVCResponseDelegateImpl, TIKeyboardInputManager;
@class NSMutableArray;

@interface UIKeyboardInputManagerMux : NSObject {

	NSMutableArray* _clients;
	id<_UIIVCResponseDelegateImpl> _responseDelegate;
	id<TIKeyboardInputManager> _systemInputManager;

}

@property (nonatomic,retain) id<TIKeyboardInputManager> systemInputManager;                //@synthesize systemInputManager=_systemInputManager - In the implementation block
@property (nonatomic,readonly) BOOL hasSystemInputManager; 
@property (nonatomic,retain) id<_UIIVCResponseDelegateImpl> responseDelegate;              //@synthesize responseDelegate=_responseDelegate - In the implementation block
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)sharedInstance;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)dealloc;
-(void)removeClient:(id)arg1 ;
-(void)addClient:(id)arg1 ;
-(BOOL)_systemHasKbd;
-(BOOL)hasSystemInputManager;
-(void)removeAllClients;
-(void)releaseConnectedClients;
-(void)updateClientResponseDelegatesWithDelegate:(id)arg1 ;
-(void)setResponseDelegate:(id<_UIIVCResponseDelegateImpl>)arg1 ;
-(id<_UIIVCResponseDelegateImpl>)responseDelegate;
-(id<TIKeyboardInputManager>)systemInputManager;
-(void)setSystemInputManager:(id<TIKeyboardInputManager>)arg1 ;
-(void)setSystemInputManagerFromTextInputTraits:(id)arg1 autofillMode:(long long)arg2 ;
@end
