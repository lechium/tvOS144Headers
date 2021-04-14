/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKDASessionManager.h>
#import <libobjc.A.dylib/PKAppletSubcredentialPairingSessionDelegate.h>

@class NSMutableArray, NSString;

@interface PKDAPairingSessionManager : PKDASessionManager <PKAppletSubcredentialPairingSessionDelegate> {

	BOOL _probingTerminalPairingStatus;
	NSMutableArray* _probingCompletionBlocks;
	/*^block*/id _prewarmCompletion;

}

@property (assign,getter=isProbingTerminalPairingStatus,nonatomic) BOOL probingTerminalPairingStatus;              //@synthesize probingTerminalPairingStatus=_probingTerminalPairingStatus - In the implementation block
@property (nonatomic,readonly) NSMutableArray * probingCompletionBlocks;                                           //@synthesize probingCompletionBlocks=_probingCompletionBlocks - In the implementation block
@property (nonatomic,copy) id prewarmCompletion;                                                                   //@synthesize prewarmCompletion=_prewarmCompletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)appletSubcredentialPairingSessionDidBeginPairing:(id)arg1 ;
-(void)appletSubcredentialPairingSession:(id)arg1 didEndPairingWithSubcredential:(id)arg2 registrationData:(id)arg3 ;
-(void)appletSubcredentialPairingSession:(id)arg1 didEndPairingWithError:(id)arg2 ;
-(void)appletSubcredentialPairingSessionDidFirstTransaction:(id)arg1 withError:(id)arg2 ;
-(void)appletSubcredentialPairingSession:(id)arg1 didFinishPreWarmWithResult:(id)arg2 ;
-(void)appletSubcredentialPairingSession:(id)arg1 didFinishProbingTerminalWithResult:(BOOL)arg2 ;
-(id)initWithQueue:(id)arg1 sessionCreationBlock:(/*^block*/id)arg2 ;
-(BOOL)isProbingTerminalPairingStatus;
-(void)setProbingTerminalPairingStatus:(BOOL)arg1 ;
-(NSMutableArray *)probingCompletionBlocks;
-(id)prewarmCompletion;
-(void)setPrewarmCompletion:(id)arg1 ;
@end

