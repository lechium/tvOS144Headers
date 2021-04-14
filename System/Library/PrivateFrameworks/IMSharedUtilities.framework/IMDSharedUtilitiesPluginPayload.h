/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData, NSString, NSURL, NSArray;

@interface IMDSharedUtilitiesPluginPayload : NSObject {

	BOOL _isFromMe;
	NSData* _data;
	NSString* _messageGUID;
	id _dataDetectedResult;
	NSURL* _url;
	id _datasource;
	NSString* _pluginBundleID;
	NSArray* _consumedSessionPayloads;
	NSArray* _attachments;

}

@property (nonatomic,retain) NSData * data;                                  //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSString * messageGUID;                           //@synthesize messageGUID=_messageGUID - In the implementation block
@property (nonatomic,retain) id dataDetectedResult;                          //@synthesize dataDetectedResult=_dataDetectedResult - In the implementation block
@property (nonatomic,retain) NSURL * url;                                    //@synthesize url=_url - In the implementation block
@property (assign,nonatomic,__weak) id datasource;                           //@synthesize datasource=_datasource - In the implementation block
@property (nonatomic,retain) NSString * pluginBundleID;                      //@synthesize pluginBundleID=_pluginBundleID - In the implementation block
@property (nonatomic,retain) NSArray * consumedSessionPayloads;              //@synthesize consumedSessionPayloads=_consumedSessionPayloads - In the implementation block
@property (nonatomic,retain) NSArray * attachments;                          //@synthesize attachments=_attachments - In the implementation block
@property (assign,nonatomic) BOOL isFromMe;                                  //@synthesize isFromMe=_isFromMe - In the implementation block
-(void)dealloc;
-(NSData *)data;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)url;
-(void)setData:(NSData *)arg1 ;
-(NSArray *)attachments;
-(void)setAttachments:(NSArray *)arg1 ;
-(NSString *)pluginBundleID;
-(void)setPluginBundleID:(NSString *)arg1 ;
-(id)datasource;
-(void)setDatasource:(id)arg1 ;
-(BOOL)isFromMe;
-(void)setMessageGUID:(NSString *)arg1 ;
-(void)setIsFromMe:(BOOL)arg1 ;
-(void)setDataDetectedResult:(id)arg1 ;
-(void)setConsumedSessionPayloads:(NSArray *)arg1 ;
-(NSString *)messageGUID;
-(id)dataDetectedResult;
-(NSArray *)consumedSessionPayloads;
@end

