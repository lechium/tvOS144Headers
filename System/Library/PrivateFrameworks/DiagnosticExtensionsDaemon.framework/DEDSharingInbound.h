/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_os_log;
@class DEDController, DEDSharingConnection, NSObject;

@interface DEDSharingInbound : NSObject {

	DEDController* _delegate;
	DEDSharingConnection* _connection;
	NSObject*<OS_os_log> _log;

}

@property (__weak) DEDController * delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (__weak) DEDSharingConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (retain) NSObject*<OS_os_log> log;                       //@synthesize log=_log - In the implementation block
-(id)init;
-(DEDController *)delegate;
-(void)setDelegate:(DEDController *)arg1 ;
-(DEDSharingConnection *)connection;
-(void)setConnection:(DEDSharingConnection *)arg1 ;
-(NSObject*<OS_os_log>)log;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(id)initWithController:(id)arg1 sharingConnection:(id)arg2 ;
-(void)handleObject:(id)arg1 forSFSession:(id)arg2 ;
-(void)handleObject:(id)arg1 forSFSession:(id)arg2 forBugSession:(id)arg3 callingDevice:(id)arg4 ;
-(void)handleRequest:(id)arg1 forSFSession:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

