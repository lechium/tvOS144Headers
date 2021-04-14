/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source, OS_dispatch_queue;
#import <PassKitCore/PassKitCore-Structs.h>
@class NSObject, NSHashTable, NSString, NSNumber, NSArray, NSUUID;

@interface PKSecureElement : NSObject {

	BOOL _deletingAllApplets;
	NSObject*<OS_dispatch_source> _deletingAllAppletsTimer;
	NSObject*<OS_dispatch_queue> _deletingAllAppletsTimerQueue;
	os_unfair_lock_s _deletingAllAppletsPropertyLock;
	NSObject*<OS_dispatch_queue> _replyQueue;
	NSObject*<OS_dispatch_queue> _sessionQueue;
	/*^block*/id _secureElementSessionPrelude;
	/*^block*/id _secureElementSessionPostlude;
	NSHashTable* _observers;
	os_unfair_lock_s _observersLock;
	BOOL _registeredForHardwareUpdates;

}

@property (nonatomic,copy) id secureElementSessionPrelude; 
@property (nonatomic,copy) id secureElementSessionPostlude; 
@property (nonatomic,readonly) BOOL isOwnable; 
@property (nonatomic,readonly) BOOL isProductionSigned; 
@property (nonatomic,readonly) BOOL isInRestrictedMode; 
@property (nonatomic,readonly) BOOL isDeletingAllApplets; 
@property (nonatomic,readonly) unsigned long long supportedTechnologies; 
@property (nonatomic,readonly) unsigned long long hardwareVersion; 
@property (nonatomic,readonly) NSString * primaryRegionTopic; 
@property (nonatomic,readonly) NSNumber * primaryJSBLSequenceCounter; 
@property (nonatomic,readonly) NSString * primarySecureElementIdentifier; 
@property (nonatomic,readonly) NSArray * secureElementIdentifiers; 
@property (nonatomic,readonly) NSUUID * ownerUserUUID; 
+(id)secureElementIdentifiers;
+(BOOL)supportsExpressForAutomaticSelectionTechnologyType:(long long)arg1 ;
+(BOOL)supportsExpressMode:(id)arg1 ;
+(id)primarySecureElementIdentifier;
+(id)sharedSecureElement;
+(BOOL)isInFailForward;
+(BOOL)hardwareSupportsExpressForAutomaticSelectionTechnologyType:(long long)arg1 ;
+(BOOL)supportsExpressForAutomaticSelectionTechnologyType:(long long)arg1 byHardware:(BOOL*)arg2 ;
+(BOOL)supportsExpressMode:(id)arg1 byHardware:(BOOL*)arg2 ;
+(BOOL)hardwareSupportsExpressMode:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)hardwareVersion;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(NSArray *)secureElementIdentifiers;
-(BOOL)supportsExpressModeForExpressPassType:(long long)arg1 ;
-(NSNumber *)primaryJSBLSequenceCounter;
-(void)connectToServerWithPushTopic:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isProductionSigned;
-(NSString *)primarySecureElementIdentifier;
-(void)stateInformationWithCompletion:(/*^block*/id)arg1 ;
-(void)signatureForAuthToken:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)signedPlatformDataWithCompletion:(/*^block*/id)arg1 ;
-(void)signChallenge:(id)arg1 signatureEntanglementMode:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)hasRegistrationInformation;
-(BOOL)setRegistrationInformation:(id)arg1 primaryRegionTopic:(id)arg2 ;
-(void)markAppletWithIdentifierForDeletion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)SEPPairingInfoWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)supportedTechnologies;
-(unsigned long long)ownershipStateForUserUUID:(id)arg1 ;
-(BOOL)setOwnerUserUUID:(id)arg1 keybagUUID:(id)arg2 ;
-(NSUUID *)ownerUserUUID;
-(void)appletWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateHardwareManagerListener;
-(void)markAppletsWithIdentifiersForDeletion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)contactlessPaymentPassesAvailableDidChange;
-(void)initializeSecureElementQueuingServerConnection:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)pairingStateWithCompletion:(/*^block*/id)arg1 ;
-(void)allAppletsWithCompletion:(/*^block*/id)arg1 ;
-(void)allAppletsAndCredentialsWithCompletion:(/*^block*/id)arg1 ;
-(void)markAllAppletsForDeletionWithExternalAuthorization:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)signChallenge:(id)arg1 forPaymentApplication:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(BOOL)queueConnectionToServerWithPushTopic:(id)arg1 ;
-(BOOL)queueConnectionToServerForAppletIdentifiers:(id)arg1 ;
-(void)peerPaymentEnrollmentDataWithAlternateDSID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)secureElementSessionPrelude;
-(void)setSecureElementSessionPrelude:(id)arg1 ;
-(id)secureElementSessionPostlude;
-(void)setSecureElementSessionPostlude:(id)arg1 ;
-(BOOL)isOwnable;
-(BOOL)isInRestrictedMode;
-(BOOL)isDeletingAllApplets;
-(NSString *)primaryRegionTopic;
@end

