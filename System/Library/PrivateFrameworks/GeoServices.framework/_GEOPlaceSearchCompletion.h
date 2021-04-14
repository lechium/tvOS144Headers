/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/GEOCompletion.h>

@class NSArray, GEOAutocompleteSessionData, NSString;

@interface _GEOPlaceSearchCompletion : NSObject <GEOCompletion> {

	NSArray* _groups;
	GEOAutocompleteSessionData* _sessionData;

}

@property (nonatomic,readonly) NSArray * groups;                                      //@synthesize groups=_groups - In the implementation block
@property (nonatomic,readonly) GEOAutocompleteSessionData * sessionData;              //@synthesize sessionData=_sessionData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)groups;
-(id)initWithResponse:(id)arg1 traits:(id)arg2 sessionData:(id)arg3 mapItems:(id)arg4 ;
-(GEOAutocompleteSessionData *)sessionData;
@end

