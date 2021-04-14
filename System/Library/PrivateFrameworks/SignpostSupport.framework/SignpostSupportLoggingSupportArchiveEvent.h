/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSUUID, NSString;


@protocol SignpostSupportLoggingSupportArchiveEvent <NSObject>
@property (assign,nonatomic) unsigned long long _machContinuousTimestamp; 
@property (assign,nonatomic) int processID; 
@property (assign,nonatomic) unsigned long long processUniqueID; 
@property (assign,nonatomic) unsigned long long threadID; 
@property (nonatomic,retain) NSUUID * processImageUUID; 
@property (nonatomic,retain) NSString * processImagePath; 
@property (nonatomic,retain) NSString * processName; 
@property (assign,nonatomic) long long tv_sec; 
@property (assign,nonatomic) int tv_usec; 
@property (assign,nonatomic) int tz_minuteswest; 
@property (assign,nonatomic) int tz_dsttime; 
@required
-(NSString *)processName;
-(void)setProcessName:(id)arg1;
-(int)processID;
-(unsigned long long)threadID;
-(void)setProcessID:(int)arg1;
-(void)setThreadID:(unsigned long long)arg1;
-(NSUUID *)processImageUUID;
-(NSString *)processImagePath;
-(unsigned long long)processUniqueID;
-(id)beginWallTimeStringWithTimeZoneName:(id)arg1;
-(id)endWallTimeStringWithTimeZoneName:(id)arg1;
-(unsigned long long)_machContinuousTimestamp;
-(long long)tv_sec;
-(int)tv_usec;
-(int)tz_minuteswest;
-(int)tz_dsttime;
-(void)set_machContinuousTimestamp:(unsigned long long)arg1;
-(void)setProcessUniqueID:(unsigned long long)arg1;
-(void)setProcessImageUUID:(id)arg1;
-(void)setProcessImagePath:(id)arg1;
-(void)setTv_sec:(long long)arg1;
-(void)setTv_usec:(int)arg1;
-(void)setTz_minuteswest:(int)arg1;
-(void)setTz_dsttime:(int)arg1;

@end

