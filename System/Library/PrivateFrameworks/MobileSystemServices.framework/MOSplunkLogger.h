/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MobileSystemServices.framework/MobileSystemServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, NSMutableArray, NSObject, NSURL, NSNumber;

@interface MOSplunkLogger : NSObject <NSURLSessionDelegate> {

	BOOL _allowInvalidCert;
	NSString* _path;
	NSMutableArray* _events;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _version;
	NSURL* _splunkUploadURL;
	NSURL* _configurationURL;
	NSString* _splunkTopic;
	NSNumber* _samplingPercentage;
	double _lastSuccessfulConfigurationLoad;

}

@property (nonatomic,retain) NSString * path;                                     //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSMutableArray * events;                             //@synthesize events=_events - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL allowInvalidCert;                               //@synthesize allowInvalidCert=_allowInvalidCert - In the implementation block
@property (nonatomic,retain) NSString * version;                                  //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSURL * splunkUploadURL;                             //@synthesize splunkUploadURL=_splunkUploadURL - In the implementation block
@property (nonatomic,retain) NSURL * configurationURL;                            //@synthesize configurationURL=_configurationURL - In the implementation block
@property (nonatomic,retain) NSString * splunkTopic;                              //@synthesize splunkTopic=_splunkTopic - In the implementation block
@property (nonatomic,retain) NSNumber * samplingPercentage;                       //@synthesize samplingPercentage=_samplingPercentage - In the implementation block
@property (assign,nonatomic) double lastSuccessfulConfigurationLoad;              //@synthesize lastSuccessfulConfigurationLoad=_lastSuccessfulConfigurationLoad - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)version;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setVersion:(NSString *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(NSMutableArray *)events;
-(void)setAllowInvalidCert:(BOOL)arg1 ;
-(NSString *)splunkTopic;
-(void)setSplunkUploadURL:(NSURL *)arg1 ;
-(NSURL *)splunkUploadURL;
-(void)setSamplingPercentage:(NSNumber *)arg1 ;
-(NSNumber *)samplingPercentage;
-(void)setLastSuccessfulConfigurationLoad:(double)arg1 ;
-(NSURL *)configurationURL;
-(double)lastSuccessfulConfigurationLoad;
-(void)_onQueue_loadConfiguration;
-(BOOL)allowInvalidCert;
-(id)initWithName:(id)arg1 configurationURL:(id)arg2 splunkTopic:(id)arg3 version:(id)arg4 allowInvalidCert:(BOOL)arg5 ;
-(void)uploadEventsWithCompletion:(/*^block*/id)arg1 ;
-(void)logEventNamed:(id)arg1 value:(id)arg2 ;
-(void)setConfigurationURL:(NSURL *)arg1 ;
-(void)setSplunkTopic:(NSString *)arg1 ;
@end

