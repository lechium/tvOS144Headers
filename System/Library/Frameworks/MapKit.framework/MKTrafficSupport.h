/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MKTrafficSupport : NSObject
+(id)sharedTrafficSupport;
-(long long)_convertType:(int)arg1 ;
-(void)setupTrafficIncidents;
-(id)localizedTitleForGEOIncidentType:(int)arg1 laneType:(int)arg2 laneCount:(unsigned long long)arg3 ;
-(id)localizedTitleForIncidentType:(long long)arg1 laneType:(long long)arg2 laneCount:(unsigned long long)arg3 ;
-(id)localizedSubtitleForStreet:(id)arg1 crossStreet:(id)arg2 ;
@end

