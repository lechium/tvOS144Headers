/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary;

@interface HKUCUMUnitDisplayConverter : NSObject {

	NSDictionary* _synonymLookupTable;
	NSDictionary* _hkUnitNameLookupTable;

}

@property (nonatomic,copy) NSDictionary * synonymLookupTable;                 //@synthesize synonymLookupTable=_synonymLookupTable - In the implementation block
@property (nonatomic,copy) NSDictionary * hkUnitNameLookupTable;              //@synthesize hkUnitNameLookupTable=_hkUnitNameLookupTable - In the implementation block
+(id)sharedConverter;
-(id)init;
-(id)hkUnitNameForUCUMUnitCode:(id)arg1 ;
-(id)synonymForUCUMUnitString:(id)arg1 ;
-(void)setSynonymLookupTable:(NSDictionary *)arg1 ;
-(void)setHkUnitNameLookupTable:(NSDictionary *)arg1 ;
-(NSDictionary *)synonymLookupTable;
-(NSDictionary *)hkUnitNameLookupTable;
@end

