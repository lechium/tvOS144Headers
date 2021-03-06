/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMObjectMerge.h>

@protocol HMSymptomsHandlerDelegate;
@class HMFUnfairLock, NSUUID, _HMContext, NSHashTable, HMMutableArray, NSSet, NSString;

@interface HMSymptomsHandler : NSObject <NSSecureCoding, HMFMessageReceiver, HMFLogging, HMObjectMerge> {

	HMFUnfairLock* _lock;
	NSUUID* _sfDeviceIdentifier;
	NSUUID* _uniqueIdentifier;
	id<HMSymptomsHandlerDelegate> _delegate;
	_HMContext* _context;
	NSHashTable* _fixSessions;
	NSUUID* _uuid;
	HMMutableArray* _currentSymptoms;

}

@property (nonatomic,retain) _HMContext * context;                                            //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSHashTable * fixSessions;                                       //@synthesize fixSessions=_fixSessions - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                 //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) HMMutableArray * currentSymptoms;                              //@synthesize currentSymptoms=_currentSymptoms - In the implementation block
@property (setter=setSFDeviceIdentifier:,copy) NSUUID * sfDeviceIdentifier;                   //@synthesize sfDeviceIdentifier=_sfDeviceIdentifier - In the implementation block
@property (copy,readonly) NSSet * symptoms; 
@property (__weak) id<HMSymptomsHandlerDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * uniqueIdentifier;                                     //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<HMSymptomsHandlerDelegate>)delegate;
-(void)setDelegate:(id<HMSymptomsHandlerDelegate>)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(_HMContext *)context;
-(void)setContext:(_HMContext *)arg1 ;
-(NSUUID *)uuid;
-(id)initWithUUID:(id)arg1 ;
-(NSSet *)symptoms;
-(id)logIdentifier;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)_unconfigureContext;
-(void)_unconfigure;
-(void)__configureWithContext:(id)arg1 ;
-(void)_registerForMessages;
-(HMMutableArray *)currentSymptoms;
-(void)_handleSymptomsUpdated:(id)arg1 ;
-(void)_handleSFDeviceIdentifierUpdated:(id)arg1 ;
-(NSUUID *)sfDeviceIdentifier;
-(void)_addFixSession:(id)arg1 ;
-(id)_findAndRemoveFixSessionsForSymptom:(id)arg1 ;
-(void)_callSymptomsUpdatedDelegate:(id)arg1 ;
-(void)setSFDeviceIdentifier:(id)arg1 ;
-(void)_callFixSessionAvailabilityUpdatedDelegate;
-(NSHashTable *)fixSessions;
-(id)newFixSessionForSymptom:(id)arg1 ;
-(void)initiateFixWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setFixSessions:(NSHashTable *)arg1 ;
@end

