/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/_MKMapItemAttribution.h>

@class GEOMapItemPhotosAttribution, NSArray;

@interface _MKMapItemPhotosAttribution : _MKMapItemAttribution {

	GEOMapItemPhotosAttribution* _geoPhotosAttribution;

}

@property (nonatomic,readonly) NSArray * addPhotoURLs; 
@property (nonatomic,readonly) BOOL shouldSuppressPhotoAttribution; 
@property (nonatomic,readonly) BOOL shouldHandlePhotosLocally; 
@property (nonatomic,readonly) BOOL shouldAddPhotosLocally; 
@property (nonatomic,readonly) BOOL supportsReportingIssue; 
-(NSArray *)addPhotoURLs;
-(id)urlsForPhotoWithIdentifier:(id)arg1 ;
-(BOOL)shouldSuppressPhotoAttribution;
-(BOOL)supportsReportingIssue;
-(id)initWithGEOMapItemAttribution:(id)arg1 ;
-(BOOL)shouldHandlePhotosLocally;
-(BOOL)shouldAddPhotosLocally;
@end

