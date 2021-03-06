/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GEOMapItemPhoto;
#import <MapKit/MapKit-Structs.h>
@class NSString, NSURL;

@interface MKMapItemPhoto : NSObject {

	NSString* _title;
	NSString* _subtitle;
	id<GEOMapItemPhoto> _geoMapItemPhoto;

}

@property (nonatomic,copy) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                  //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) NSString * license; 
@property (nonatomic,readonly) NSURL * largestPhotoURL; 
@property (nonatomic,readonly) NSString * photoID; 
@property (nonatomic,readonly) BOOL useGallery; 
@property (nonatomic,readonly) long long format; 
@property (nonatomic,readonly) BOOL displayFullScreenPhotoGallery; 
@property (nonatomic,readonly) id<GEOMapItemPhoto> geoMapItemPhoto;              //@synthesize geoMapItemPhoto=_geoMapItemPhoto - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(long long)format;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(id)initWithPictureItem:(id)arg1 ;
-(BOOL)useGallery;
-(BOOL)displayFullScreenPhotoGallery;
-(NSString *)license;
-(id)initWithGeoMapItemPhoto:(id)arg1 ;
-(id)urlForBestPhotoForSize:(CGSize)arg1 ;
-(NSURL *)largestPhotoURL;
-(id)initWithGeoMapItemPhoto:(id)arg1 title:(id)arg2 subtitle:(id)arg3 ;
-(NSString *)photoID;
-(id<GEOMapItemPhoto>)geoMapItemPhoto;
@end

