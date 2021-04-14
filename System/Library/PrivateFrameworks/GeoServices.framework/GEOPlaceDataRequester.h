/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GEOServiceRequester.h>
#import <libobjc.A.dylib/GEOPlaceDataRequester.h>

@protocol GEOPlaceDataRequester
@required
-(void)cancelRequest:(id)arg1;
-(void)startWithRequest:(id)arg1 traits:(id)arg2 timeout:(double)arg3 auditToken:(id)arg4 throttleToken:(id)arg5 completionHandler:(/*^block*/id)arg6;

@end


@interface GEOPlaceDataRequester : GEOServiceRequester <GEOPlaceDataRequester>
+(id)sharedInstance;
-(void)cancelRequest:(id)arg1 ;
-(id)_validateResponse:(id)arg1 ;
-(void)startWithRequest:(id)arg1 traits:(id)arg2 timeout:(double)arg3 auditToken:(id)arg4 throttleToken:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
@end
