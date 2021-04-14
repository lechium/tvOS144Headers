/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class GEOMapItemChildActionSearch;

@interface GEOMapItemChildAction : NSObject {

	long long _childActionType;
	GEOMapItemChildActionSearch* _childActionSearch;

}

@property (assign,nonatomic) long long childActionType;                                    //@synthesize childActionType=_childActionType - In the implementation block
@property (nonatomic,retain) GEOMapItemChildActionSearch * childActionSearch;              //@synthesize childActionSearch=_childActionSearch - In the implementation block
-(GEOMapItemChildActionSearch *)childActionSearch;
-(void)setChildActionType:(long long)arg1 ;
-(void)setChildActionSearch:(GEOMapItemChildActionSearch *)arg1 ;
-(long long)childActionType;
-(id)initWithChildAction:(id)arg1 ;
@end

