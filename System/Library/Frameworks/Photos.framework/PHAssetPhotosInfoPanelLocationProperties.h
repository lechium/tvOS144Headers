/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/PHAssetPropertySet.h>

@class NSData;

@interface PHAssetPhotosInfoPanelLocationProperties : PHAssetPropertySet {

	NSData* _placeAnnotationData;

}

@property (nonatomic,readonly) NSData * placeAnnotationData;              //@synthesize placeAnnotationData=_placeAnnotationData - In the implementation block
+(id)propertiesToFetch;
+(id)propertySetName;
+(id)keyPathFromPrimaryObject;
-(NSData *)placeAnnotationData;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
@end

