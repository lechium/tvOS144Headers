/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSString;

@interface PLPTPAssetReader : NSObject {

	NSString* _path;
	id _userInfo;
	BOOL _shouldDeleteTemporaryFileOnDeallocation;

}

@property (nonatomic,copy,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) id userInfo;                         //@synthesize userInfo=_userInfo - In the implementation block
-(id)description;
-(void)dealloc;
-(id)userInfo;
-(NSString *)path;
-(id)initWithPath:(id)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(id)initWithTemporaryFileDeletedOnDeallocPath:(id)arg1 ;
-(id)dataSourcePathForDataRange:(NSRange)arg1 error:(id*)arg2 ;
@end

