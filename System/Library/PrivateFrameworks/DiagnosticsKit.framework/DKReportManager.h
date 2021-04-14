/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSArray, NSString, DKReporterRegistry, DKReportPlanner, DKExtensionDiscovery, NSObject;

@interface DKReportManager : NSObject {

	BOOL _cancelled;
	NSArray* _availableReportGenerators;
	NSString* _bundleIdentifier;
	DKReporterRegistry* _registry;
	DKReportPlanner* _planner;
	DKExtensionDiscovery* _discovery;
	NSObject*<OS_dispatch_queue> _reportManagerQueue;

}

@property (nonatomic,retain) NSString * bundleIdentifier;                                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) DKReporterRegistry * registry;                                //@synthesize registry=_registry - In the implementation block
@property (nonatomic,retain) DKReportPlanner * planner;                                    //@synthesize planner=_planner - In the implementation block
@property (nonatomic,retain) DKExtensionDiscovery * discovery;                             //@synthesize discovery=_discovery - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> reportManagerQueue;              //@synthesize reportManagerQueue=_reportManagerQueue - In the implementation block
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;                            //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,retain) NSArray * availableReportGenerators;                          //@synthesize availableReportGenerators=_availableReportGenerators - In the implementation block
-(id)init;
-(NSString *)bundleIdentifier;
-(BOOL)isCancelled;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setCancelled:(BOOL)arg1 ;
-(DKExtensionDiscovery *)discovery;
-(void)setDiscovery:(DKExtensionDiscovery *)arg1 ;
-(NSObject*<OS_dispatch_queue>)reportManagerQueue;
-(DKReportPlanner *)planner;
-(id)sendRequestsForGroup:(id)arg1 concurrent:(BOOL)arg2 failOnError:(BOOL)arg3 error:(id*)arg4 ;
-(NSArray *)availableReportGenerators;
-(DKReporterRegistry *)registry;
-(void)reportWithComponentPredicateManifest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)reportersWithCompletion:(/*^block*/id)arg1 ;
-(void)cancelAllReports;
-(void)setAvailableReportGenerators:(NSArray *)arg1 ;
-(void)setRegistry:(DKReporterRegistry *)arg1 ;
-(void)setPlanner:(DKReportPlanner *)arg1 ;
-(void)setReportManagerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

