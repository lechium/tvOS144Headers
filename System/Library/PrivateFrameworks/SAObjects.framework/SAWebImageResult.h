/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAWebWebResult.h>

@class NSNumber, SAWebAcePicture, NSArray;

@interface SAWebImageResult : SAWebWebResult

@property (nonatomic,copy) NSNumber * fileSize; 
@property (nonatomic,retain) SAWebAcePicture * picture; 
@property (nonatomic,copy) NSArray * thumbNails; 
+(id)imageResult;
+(id)imageResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)fileSize;
-(id)groupIdentifier;
-(void)setFileSize:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(SAWebAcePicture *)picture;
-(void)setPicture:(SAWebAcePicture *)arg1 ;
-(NSArray *)thumbNails;
-(void)setThumbNails:(NSArray *)arg1 ;
@end
