/*
 * Copyright 2010-present Facebook.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import <Foundation/Foundation.h>

#import "FBGraphObject.h"
#import "FBGraphPlace.h"

/*!
 @protocol

 @abstract
 The `FBGraphUser` protocol enables typed access to a user object
 as represented in the Graph API.


 @discussion
 The `FBGraphUser` protocol represents the most commonly used properties of a
 Facebook user object. It may be used to access an `NSDictionary` object that has
 been wrapped with an <FBGraphObject> facade.
 */
@protocol FBGraphUser<FBGraphObject>

/*!
 @property
 @abstract Typed access to the user's ID.
 */
@property (retain, nonatomic) NSString *FbUserId;

/*!
 @property
 @abstract Typed access to the user's name.
 */
@property (retain, nonatomic) NSString *name;

/*!
 @property
 @abstract Typed access to the user's first name.
 */
@property (retain, nonatomic) NSString *first_name;

/*!
 @property
 @abstract Typed access to the user's middle name.
 */
@property (retain, nonatomic) NSString *middle_name;

/*!
 @property
 @abstract Typed access to the user's last name.
 */
@property (retain, nonatomic) NSString *last_name;

/*!
 @property
 @abstract Typed access to the user's profile URL.
 */
@property (retain, nonatomic) NSString *link;

/*!
 @property
 @abstract Typed access to the user's username.
 */
@property (retain, nonatomic) NSString *username;

/*!
 @property
 @abstract Typed access to the user's birthday.
 */
@property (retain, nonatomic) NSString *birthday;

/*!
 @property
 @abstract Typed access to the user's current city.
 */
@property (retain, nonatomic) id<FBGraphPlace> location;

@end
