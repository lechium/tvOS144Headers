/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CKOperationMMCSRequestOptions : NSObject <NSSecureCoding> {

	BOOL _resumableContainerLimpMode;
	BOOL _chunkingLibraryCorruptionMode;
	BOOL _insufficientDiskSpaceMode;

}

@property (assign,nonatomic) BOOL resumableContainerLimpMode;                 //@synthesize resumableContainerLimpMode=_resumableContainerLimpMode - In the implementation block
@property (assign,nonatomic) BOOL chunkingLibraryCorruptionMode;              //@synthesize chunkingLibraryCorruptionMode=_chunkingLibraryCorruptionMode - In the implementation block
@property (assign,nonatomic) BOOL insufficientDiskSpaceMode;                  //@synthesize insufficientDiskSpaceMode=_insufficientDiskSpaceMode - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)resumableContainerLimpMode;
-(void)setResumableContainerLimpMode:(BOOL)arg1 ;
-(BOOL)chunkingLibraryCorruptionMode;
-(void)setChunkingLibraryCorruptionMode:(BOOL)arg1 ;
-(BOOL)insufficientDiskSpaceMode;
-(void)setInsufficientDiskSpaceMode:(BOOL)arg1 ;
@end

