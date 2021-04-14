/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <GeoServices/GeoServices-Structs.h>
@class NSDictionary;

@interface GEOLocalizationRegionsInfo : NSObject {

	NSDictionary* _regions;
	os_unfair_lock_s _regionsLock;

}
-(id)init;
-(void)reset;
-(BOOL)needsLocalizationForKey:(const GEOTileKey*)arg1 language:(id)arg2 ;
@end

