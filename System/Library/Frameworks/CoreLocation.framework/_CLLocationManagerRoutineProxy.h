/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CLLocationManagerRoutineClientInterface.h>

@protocol OS_dispatch_queue, CLLocationManagerDelegate;
@class NSObject, NSXPCConnection, CLLocationManagerRoutine, NSString;

@interface _CLLocationManagerRoutineProxy : NSObject <CLLocationManagerRoutineClientInterface> {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _updating;
	NSXPCConnection* _connection;
	id<CLLocationManagerDelegate> _delegate;
	CLLocationManagerRoutine* _locationManagerRoutine;

}

@property (nonatomic,retain) NSXPCConnection * connection;                                   //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) id<CLLocationManagerDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CLLocationManagerRoutine * locationManagerRoutine;              //@synthesize locationManagerRoutine=_locationManagerRoutine - In the implementation block
@property (assign,nonatomic) BOOL updating;                                                  //@synthesize updating=_updating - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<CLLocationManagerDelegate>)delegate;
-(void)setDelegate:(id<CLLocationManagerDelegate>)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)createConnection;
-(void)setLocationManagerRoutine:(CLLocationManagerRoutine *)arg1 ;
-(CLLocationManagerRoutine *)locationManagerRoutine;
-(void)didUpdateLocations:(id)arg1 ;
-(BOOL)updating;
-(id)initWithQueue:(id)arg1 locationManagerRoutine:(id)arg2 ;
-(void)setUpdating:(BOOL)arg1 ;
@end
