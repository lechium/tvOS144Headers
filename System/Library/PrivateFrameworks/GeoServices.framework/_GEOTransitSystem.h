/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/GEOTransitSystem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, GEOPBTransitSystem, GEOStyleAttributes;

@interface _GEOTransitSystem : NSObject <GEOTransitSystem, NSSecureCoding> {

	GEOPBTransitSystem* _system;

}

@property (nonatomic,readonly) GEOStyleAttributes * styleAttributes; 
@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> artwork; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)muid;
-(GEOStyleAttributes *)styleAttributes;
-(id<GEOTransitArtworkDataSource>)artwork;
-(id)initWithSystem:(id)arg1 ;
@end

