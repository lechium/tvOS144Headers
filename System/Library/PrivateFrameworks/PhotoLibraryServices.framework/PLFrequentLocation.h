/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLFrequentLocationProtocol.h>

@protocol PLMomentProtocol;
@class NSDateInterval, NSArray, NSMutableArray, NSSet, NSString;

@interface PLFrequentLocation : NSObject <PLFrequentLocationProtocol> {

	NSMutableArray* _sortedMoments;
	NSDateInterval* _dateInterval;
	NSSet* _momentsSet;
	id<PLMomentProtocol> _centroid;
	CLLocationCoordinate2D _coordinate;

}

@property (nonatomic,retain) NSMutableArray * sortedMoments;                 //@synthesize sortedMoments=_sortedMoments - In the implementation block
@property (assign,nonatomic) CLLocationCoordinate2D coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,retain) NSDateInterval * dateInterval;                  //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,retain) NSSet * momentsSet;                             //@synthesize momentsSet=_momentsSet - In the implementation block
@property (nonatomic,retain) id<PLMomentProtocol> centroid;                  //@synthesize centroid=_centroid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(CLLocationCoordinate2D)coordinate;
-(NSDateInterval *)dateInterval;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(id<PLMomentProtocol>)centroid;
-(void)setCentroid:(id<PLMomentProtocol>)arg1 ;
-(NSMutableArray *)sortedMoments;
-(id)initWithSortedMoments:(id)arg1 ;
-(BOOL)isSimilarToFrequentLocation:(id)arg1 ;
-(BOOL)isWithinDistance:(double)arg1 toCoordinate:(CLLocationCoordinate2D)arg2 ;
-(void)addMomentToSortedMoment:(id)arg1 ;
-(void)_invalidateLazyProperties;
-(NSSet *)momentsSet;
-(void)setSortedMoments:(NSMutableArray *)arg1 ;
-(void)setMomentsSet:(NSSet *)arg1 ;
@end

