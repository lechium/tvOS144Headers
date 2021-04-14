/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, PXContextualMemoriesTimeSetting, PXContextualMemoriesLocationSetting, PXContextualMemoriesPeopleSetting, NSArray, NSDate, CLLocation;

@interface PXContextualMemoriesSettings : NSObject {

	NSDictionary* _extraParameters;
	PXContextualMemoriesTimeSetting* _timeSetting;
	PXContextualMemoriesLocationSetting* _locationSetting;
	PXContextualMemoriesPeopleSetting* _peopleSetting;
	NSArray* _settings;

}

@property (nonatomic,readonly) PXContextualMemoriesTimeSetting * timeSetting;                      //@synthesize timeSetting=_timeSetting - In the implementation block
@property (nonatomic,readonly) PXContextualMemoriesLocationSetting * locationSetting;              //@synthesize locationSetting=_locationSetting - In the implementation block
@property (nonatomic,readonly) PXContextualMemoriesPeopleSetting * peopleSetting;                  //@synthesize peopleSetting=_peopleSetting - In the implementation block
@property (nonatomic,readonly) NSArray * settings;                                                 //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) NSDate * date; 
@property (nonatomic,readonly) CLLocation * location; 
@property (nonatomic,readonly) NSArray * peopleNames; 
@property (nonatomic,copy) NSDictionary * extraParameters;                                         //@synthesize extraParameters=_extraParameters - In the implementation block
-(id)init;
-(NSDate *)date;
-(NSArray *)settings;
-(CLLocation *)location;
-(NSArray *)peopleNames;
-(NSDictionary *)extraParameters;
-(void)setExtraParameters:(NSDictionary *)arg1 ;
-(PXContextualMemoriesTimeSetting *)timeSetting;
-(PXContextualMemoriesLocationSetting *)locationSetting;
-(PXContextualMemoriesPeopleSetting *)peopleSetting;
@end

