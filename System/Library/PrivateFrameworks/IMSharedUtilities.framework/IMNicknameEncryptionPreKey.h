/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData, IMNicknameFieldEncryptionKey, IMNicknameFieldTaggingKey, IMNicknameRecordTaggingKey;

@interface IMNicknameEncryptionPreKey : NSObject {

	NSData* _generatedData;
	NSData* _derivedData;

}

@property (nonatomic,readonly) IMNicknameFieldEncryptionKey * fieldEncryptionKey; 
@property (nonatomic,readonly) IMNicknameFieldTaggingKey * fieldTaggingKey; 
@property (nonatomic,readonly) IMNicknameRecordTaggingKey * recordTaggingKey; 
+(id)preKeyWithDataRepresentation:(id)arg1 error:(id*)arg2 ;
+(id)generatePreKeyWithError:(id*)arg1 ;
-(void)dealloc;
-(id)dataRepresentation;
-(IMNicknameFieldEncryptionKey *)fieldEncryptionKey;
-(IMNicknameFieldTaggingKey *)fieldTaggingKey;
-(IMNicknameRecordTaggingKey *)recordTaggingKey;
-(id)initWithGeneratedData:(id)arg1 derivedData:(id)arg2 ;
-(id)_subDerviedKeyDataAtIndex:(unsigned long long)arg1 ;
@end

