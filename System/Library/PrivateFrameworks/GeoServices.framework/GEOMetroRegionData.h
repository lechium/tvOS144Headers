/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <GeoServices/GeoServices-Structs.h>
@interface GEOMetroRegionData : NSObject {

	unique_ptr<gloria::DB, std::__1::default_delete<gloria::DB> >* _db;

}
-(id)init;
-(id)initWithFileURL:(id)arg1 ;
-(id)metroNameForLocation:(id)arg1 ;
@end
