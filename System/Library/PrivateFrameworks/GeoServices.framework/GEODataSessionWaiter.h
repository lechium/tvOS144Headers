/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/GEODataSessionTaskDelegate.h>

@class GEODataSession, GEODataSessionTask, NSString;

@interface GEODataSessionWaiter : NSObject <GEODataSessionTaskDelegate> {

	GEODataSession* _session;
	GEODataSessionTask* _task;
	/*^block*/id _handler;
	id _strongReferenceToSelf;

}

@property (nonatomic,retain) GEODataSession * session;               //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) GEODataSessionTask * task;              //@synthesize task=_task - In the implementation block
@property (nonatomic,copy) id handler;                               //@synthesize handler=_handler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(GEODataSession *)session;
-(void)setHandler:(id)arg1 ;
-(id)handler;
-(void)setSession:(GEODataSession *)arg1 ;
-(void)dataSession:(id)arg1 didCompleteTask:(id)arg2 ;
-(GEODataSessionTask *)task;
-(void)setTask:(GEODataSessionTask *)arg1 ;
-(id)initWithSession:(id)arg1 request:(id)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

