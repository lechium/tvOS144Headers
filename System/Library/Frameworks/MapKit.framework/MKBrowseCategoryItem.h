/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, UIImage, GEOSearchCategory;

@interface MKBrowseCategoryItem : NSObject {

	NSString* _title;
	UIImage* _image;
	GEOSearchCategory* _searchCategory;

}

@property (nonatomic,readonly) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UIImage * image;                                 //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) GEOSearchCategory * searchCategory;              //@synthesize searchCategory=_searchCategory - In the implementation block
-(NSString *)title;
-(UIImage *)image;
-(GEOSearchCategory *)searchCategory;
-(id)initWithCategory:(id)arg1 nightMode:(BOOL)arg2 ;
-(id)imageWithSearchCategory:(id)arg1 nightMode:(BOOL)arg2 ;
@end

