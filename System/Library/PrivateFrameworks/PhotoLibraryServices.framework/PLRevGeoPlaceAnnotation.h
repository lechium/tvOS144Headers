/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PLRevGeoPlaceAnnotation : NSObject <NSCopying> {

	int _placeLevel;
	NSString* _placeName;

}

@property (assign,nonatomic) int placeLevel;                    //@synthesize placeLevel=_placeLevel - In the implementation block
@property (nonatomic,retain) NSString * placeName;              //@synthesize placeName=_placeName - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(int)placeLevel;
-(void)setPlaceLevel:(int)arg1 ;
-(NSString *)placeName;
-(void)setPlaceName:(NSString *)arg1 ;
@end

