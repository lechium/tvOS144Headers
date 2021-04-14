/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NetDiagnosticsShimDelegate.h>

@protocol SymptomsFileCleanerDelegate, OS_dispatch_queue;
@class NetDiagnosticsShim, NSObject, NSArray, NSString;

@interface SymptomsFileCleaner : NSObject <NetDiagnosticsShimDelegate> {

	id<SymptomsFileCleanerDelegate> _delegate;
	NetDiagnosticsShim* _netDiags;
	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _filesToDelete;

}

@property (retain) NetDiagnosticsShim * netDiags;                         //@synthesize netDiags=_netDiags - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                    //@synthesize queue=_queue - In the implementation block
@property (retain) NSArray * filesToDelete;                               //@synthesize filesToDelete=_filesToDelete - In the implementation block
@property (retain) id<SymptomsFileCleanerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SymptomsFileCleanerDelegate>)delegate;
-(void)setDelegate:(id<SymptomsFileCleanerDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)cleanupFiles:(id)arg1 ;
-(void)setFilesToDelete:(NSArray *)arg1 ;
-(NetDiagnosticsShim *)netDiags;
-(void)netDiagnosticTaskStatusChangedFor:(id)arg1 toStatus:(int)arg2 ;
-(void)setNetDiags:(NetDiagnosticsShim *)arg1 ;
-(NSArray *)filesToDelete;
@end

