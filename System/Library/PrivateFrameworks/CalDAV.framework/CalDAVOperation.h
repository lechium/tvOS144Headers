/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAVTaskGroup.h>

@protocol CalDAVPrincipal;
@class NSMutableSet;

@interface CalDAVOperation : CoreDAVTaskGroup {

	BOOL _isCancellingTaskGroups;
	id<CalDAVPrincipal> _principal;
	NSMutableSet* _outstandingTaskGroups;

}

@property (nonatomic,retain) id<CalDAVPrincipal> principal;                     //@synthesize principal=_principal - In the implementation block
@property (nonatomic,retain) NSMutableSet * outstandingTaskGroups;              //@synthesize outstandingTaskGroups=_outstandingTaskGroups - In the implementation block
-(id)init;
-(void)dealloc;
-(id<CalDAVPrincipal>)principal;
-(void)bailWithError:(id)arg1 ;
-(void)cancelTaskGroup;
-(void)setPrincipal:(id<CalDAVPrincipal>)arg1 ;
-(NSMutableSet *)outstandingTaskGroups;
-(void)_tearDownAllTaskGroupsWithBlock:(/*^block*/id)arg1 ;
-(id)initWithPrincipal:(id)arg1 ;
-(void)setOutstandingTaskGroups:(NSMutableSet *)arg1 ;
@end

