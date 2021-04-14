/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/HMMutableApplicationData.h>

@class NSUUID, HMApplicationData, HMFUnfairLock, NSString, HMHome, _HMContext, NSArray;

@interface HMRoom : NSObject <NSSecureCoding, HMObjectMerge, HMMutableApplicationData> {

	HMFUnfairLock* _lock;
	NSUUID* _uniqueIdentifier;
	NSString* _name;
	NSUUID* _uuid;
	HMHome* _home;
	HMApplicationData* _applicationData;
	_HMContext* _context;

}

@property (nonatomic,retain) _HMContext * context;                             //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) HMHome * home;                             //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                    //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSArray * accessories; 
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                 //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSUUID * applicationDataIdentifier; 
@property (nonatomic,retain) HMApplicationData * applicationData;              //@synthesize applicationData=_applicationData - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(_HMContext *)context;
-(void)setContext:(_HMContext *)arg1 ;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(HMApplicationData *)applicationData;
-(NSArray *)accessories;
-(void)setApplicationData:(HMApplicationData *)arg1 ;
-(void)updateApplicationData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)_unconfigureContext;
-(void)_unconfigure;
-(void)__configureWithContext:(id)arg1 home:(id)arg2 ;
-(void)_updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSUUID *)applicationDataIdentifier;
-(void)_updateRoomName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

