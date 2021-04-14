/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSString;

@interface PXMemoriesTitleHelper : NSObject {

	NSString* _softLineBreak;
	NSString* _truncationToken;
	long long _preferredLineLength;
	double _minimumScaleFactor;

}

@property (nonatomic,copy) NSString * softLineBreak;                     //@synthesize softLineBreak=_softLineBreak - In the implementation block
@property (nonatomic,copy) NSString * truncationToken;                   //@synthesize truncationToken=_truncationToken - In the implementation block
@property (assign,nonatomic) long long preferredLineLength;              //@synthesize preferredLineLength=_preferredLineLength - In the implementation block
@property (assign,nonatomic) double minimumScaleFactor;                  //@synthesize minimumScaleFactor=_minimumScaleFactor - In the implementation block
+(id)defaultHelper;
-(id)init;
-(double)minimumScaleFactor;
-(void)setMinimumScaleFactor:(double)arg1 ;
-(id)displayableTextForTitle:(id)arg1 intent:(long long)arg2 ;
-(id)titleForDisplayableText:(id)arg1 titleCategory:(long long)arg2 options:(unsigned long long)arg3 ;
-(BOOL)_isTextLongerThanPreferredLine:(id)arg1 range:(NSRange)arg2 minimumScaleFactor:(double)arg3 ;
-(NSString *)softLineBreak;
-(void)setSoftLineBreak:(NSString *)arg1 ;
-(NSString *)truncationToken;
-(void)setTruncationToken:(NSString *)arg1 ;
-(long long)preferredLineLength;
-(void)setPreferredLineLength:(long long)arg1 ;
@end

