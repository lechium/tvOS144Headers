/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUUID, NSArray, NSDictionary, HKDevice;

@interface _HKDataCollectorPendingBatch : NSObject {

	NSUUID* _batchUUID;
	NSArray* _data;
	NSDictionary* _metadata;
	HKDevice* _device;
	/*^block*/id _completion;

}

@property (nonatomic,copy,readonly) NSUUID * batchUUID;                   //@synthesize batchUUID=_batchUUID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * data;                       //@synthesize data=_data - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy,readonly) HKDevice * device;                    //@synthesize device=_device - In the implementation block
@property (nonatomic,copy,readonly) id completion;                        //@synthesize completion=_completion - In the implementation block
-(id)description;
-(id)init;
-(NSArray *)data;
-(id)completion;
-(NSDictionary *)metadata;
-(HKDevice *)device;
-(NSUUID *)batchUUID;
-(id)initWithIdentifier:(id)arg1 data:(id)arg2 metadata:(id)arg3 device:(id)arg4 completion:(/*^block*/id)arg5 ;
@end

