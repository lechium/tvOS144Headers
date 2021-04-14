/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MKMapServiceCuratedCollectionTicket, MKMapServiceCuratedCollectionItemsTicket;
@class MKMapItemIdentifier;

@interface MKPlaceCuratedCollectionRefiner : NSObject {

	MKMapItemIdentifier* _collectionIdentifier;
	id<MKMapServiceCuratedCollectionTicket> _identifierRefinementTicket;
	id<MKMapServiceCuratedCollectionItemsTicket> _mapItemRefinementTicket;

}
-(id)initWithCollectionIdentifier:(unsigned long long)arg1 providerIdentifier:(int)arg2 ;
-(void)_resolveMapItemsWithCollection:(id)arg1 callbackQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithCollectionIdentifier:(unsigned long long)arg1 ;
-(void)fetchWithCallbackQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

