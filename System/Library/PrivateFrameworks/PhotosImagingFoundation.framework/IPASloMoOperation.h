/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <PhotosImagingFoundation/IPAVideoOperation.h>

@interface IPASloMoOperation : IPAVideoOperation {

	SCD_Struct_IP2 _timeRange;
	float _rate;

}

@property (nonatomic,readonly) float rate; 
@property (nonatomic,readonly) SCD_Struct_IP2 timeRange; 
+(id)operationFromFileURL:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)identifier;
-(id)internalRepresentation;
-(SCD_Struct_IP2)timeRange;
-(float)rate;
-(id)settingsDictionary;
-(id)initWithOperation:(id)arg1 ;
-(id)initWithSettingsDictionary:(id)arg1 ;
-(BOOL)isEqualToOperation:(id)arg1 ;
-(BOOL)isMigratable;
-(id)initWithTimeRange:(SCD_Struct_IP2)arg1 rate:(float)arg2 ;
@end

