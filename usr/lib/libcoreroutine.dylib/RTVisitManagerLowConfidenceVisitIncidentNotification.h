/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libcoreroutine.dylib/RTNotification.h>

@class RTVisit;

@interface RTVisitManagerLowConfidenceVisitIncidentNotification : RTNotification {

	RTVisit* _visitIncident;

}

@property (nonatomic,readonly) RTVisit * visitIncident;              //@synthesize visitIncident=_visitIncident - In the implementation block
-(id)init;
-(RTVisit *)visitIncident;
-(id)initWithVisitIncident:(id)arg1 ;
@end

