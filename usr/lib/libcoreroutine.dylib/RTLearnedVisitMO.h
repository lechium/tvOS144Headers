/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libcoreroutine.dylib/RTCloudManagedObject.h>

@class NSDateInterval, NSNumber, NSDate, RTLearnedPlaceMO, RTLearnedTransitionMO;

@interface RTLearnedVisitMO : RTCloudManagedObject {

	NSDateInterval* _interval;

}

@property (nonatomic,copy) NSNumber * locationUncertainty; 
@property (nonatomic,copy) NSNumber * confidence; 
@property (nonatomic,copy) NSNumber * dataPointCount; 
@property (nonatomic,copy) NSDate * entryDate; 
@property (nonatomic,copy) NSDate * exitDate; 
@property (nonatomic,copy) NSNumber * locationLatitude; 
@property (nonatomic,copy) NSNumber * locationLongitude; 
@property (nonatomic,copy) NSNumber * locationReferenceFrame; 
@property (nonatomic,copy) NSNumber * locationHorizontalUncertainty; 
@property (nonatomic,copy) NSNumber * locationAltitude; 
@property (nonatomic,copy) NSNumber * locationVerticalUncertainty; 
@property (nonatomic,copy) NSNumber * placeConfidence; 
@property (nonatomic,copy) NSNumber * placeSource; 
@property (nonatomic,retain) RTLearnedPlaceMO * place; 
@property (nonatomic,retain) RTLearnedTransitionMO * inbound; 
@property (nonatomic,retain) RTLearnedTransitionMO * outbound; 
@property (nonatomic,readonly) NSDateInterval * interval;                         //@synthesize interval=_interval - In the implementation block
+(id)fetchRequest;
+(id)managedObjectWithVisit:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)managedObjectWithVisit:(id)arg1 place:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(id)managedObjectWithVisit:(id)arg1 place:(id)arg2 managedObject:(id)arg3 inManagedObjectContext:(id)arg4 ;
-(NSDateInterval *)interval;
-(NSNumber *)locationHorizontalUncertainty;
-(void)setLocationHorizontalUncertainty:(NSNumber *)arg1 ;
-(BOOL)overlapsWithVisit:(id)arg1 ;
-(BOOL)intersectsWithVisit:(id)arg1 distanceCalculator:(id)arg2 ;
@end

