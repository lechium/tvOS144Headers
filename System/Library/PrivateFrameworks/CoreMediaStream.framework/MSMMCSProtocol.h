/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreMediaStream/CoreMediaStream-Structs.h>
#import <libobjc.A.dylib/MSStorageProtocol.h>

@class NSString;

@interface MSMMCSProtocol : NSObject <MSStorageProtocol> {

	NSString* _personID;
	NSString* _MMCSDirPath;
	mmcs_engineRef _engine;
	NSString* _engineDirPath;

}

@property (nonatomic,readonly) NSString * personID;                 //@synthesize personID=_personID - In the implementation block
@property (nonatomic,readonly) mmcs_engineRef engine;               //@synthesize engine=_engine - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)computeItemIDForAsset:(id)arg1 ;
-(void)dealloc;
-(void)deactivate;
-(void)abort;
-(mmcs_engineRef)engine;
-(NSString *)personID;
-(void)didFinishUsingAssets:(id)arg1 ;
-(void)deactivateRemoveAllFiles:(BOOL)arg1 ;
-(id)initWithPersonID:(id)arg1 path:(id)arg2 ;
-(int)_getFileDescriptorFromItem:(unsigned long long)arg1 ;
-(id)_getUTIFromItem:(unsigned long long)arg1 ;
-(void)_getItemDone:(unsigned long long)arg1 path:(id)arg2 error:(id)arg3 ;
-(void)_putItemDone:(unsigned long long)arg1 putReceipt:(id)arg2 error:(id)arg3 ;
-(void)_requestCompleted;
@end

