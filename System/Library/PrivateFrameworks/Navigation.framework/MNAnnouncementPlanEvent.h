/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class GEOComposedGuidanceEvent, MNGuidanceEventManager, NSMutableArray;

@interface MNAnnouncementPlanEvent : NSObject {

	BOOL _includeInPlan;
	GEOComposedGuidanceEvent* _event;
	unsigned long long _variantIndex;
	double _triggerDistance;
	MNGuidanceEventManager* _manager;
	double _distance;
	double _speed;
	NSMutableArray* _announcementDurations;

}

@property (assign,nonatomic,__weak) MNGuidanceEventManager * manager;              //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) GEOComposedGuidanceEvent * event;                     //@synthesize event=_event - In the implementation block
@property (assign,nonatomic) double distance;                                      //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) double speed;                                         //@synthesize speed=_speed - In the implementation block
@property (nonatomic,retain) NSMutableArray * announcementDurations;               //@synthesize announcementDurations=_announcementDurations - In the implementation block
@property (assign,nonatomic) BOOL includeInPlan;                                   //@synthesize includeInPlan=_includeInPlan - In the implementation block
@property (assign,nonatomic) unsigned long long variantIndex;                      //@synthesize variantIndex=_variantIndex - In the implementation block
@property (assign,nonatomic) double triggerDistance;                               //@synthesize triggerDistance=_triggerDistance - In the implementation block
@property (nonatomic,readonly) double completionDistance; 
-(id)description;
-(MNGuidanceEventManager *)manager;
-(GEOComposedGuidanceEvent *)event;
-(void)setSpeed:(double)arg1 ;
-(double)speed;
-(void)setDistance:(double)arg1 ;
-(double)distance;
-(void)setEvent:(GEOComposedGuidanceEvent *)arg1 ;
-(void)setManager:(MNGuidanceEventManager *)arg1 ;
-(id)initWithEvent:(id)arg1 distance:(double)arg2 speed:(double)arg3 manager:(id)arg4 ;
-(BOOL)includeInPlan;
-(double)completionDistance;
-(double)triggerDistance;
-(unsigned long long)variantIndex;
-(void)setVariantIndex:(unsigned long long)arg1 ;
-(void)setTriggerDistance:(double)arg1 ;
-(void)setIncludeInPlan:(BOOL)arg1 ;
-(NSMutableArray *)announcementDurations;
-(void)setAnnouncementDurations:(NSMutableArray *)arg1 ;
@end

