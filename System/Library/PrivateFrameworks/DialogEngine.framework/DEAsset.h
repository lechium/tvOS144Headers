/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <DialogEngine/DialogEngine-Structs.h>
@class NSData;

@interface DEAsset : NSObject {

	NSData* _version;
	NSData* _encryptedVersion;
	unsigned long long _downloadType;
	unsigned long long _encryptedSize;

}

@property (nonatomic,retain) NSData * version;                              //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSData * encryptedVersion;                     //@synthesize encryptedVersion=_encryptedVersion - In the implementation block
@property (assign,nonatomic) unsigned long long downloadType;               //@synthesize downloadType=_downloadType - In the implementation block
@property (assign,nonatomic) unsigned long long encryptedSize;              //@synthesize encryptedSize=_encryptedSize - In the implementation block
+(void)assetToPb:(id)arg1 asset:(id)arg2 assetPb:(Asset*)arg3 ;
+(unsigned long long)downloadTypeFromPb:(int)arg1 ;
+(int)downloadTypeToPb:(unsigned long long)arg1 ;
+(id)assetFromPb:(const Asset*)arg1 ;
-(NSData *)version;
-(void)setVersion:(NSData *)arg1 ;
-(unsigned long long)downloadType;
-(void)setDownloadType:(unsigned long long)arg1 ;
-(void)setEncryptedVersion:(NSData *)arg1 ;
-(void)setEncryptedSize:(unsigned long long)arg1 ;
-(NSData *)encryptedVersion;
-(unsigned long long)encryptedSize;
@end

